object frmDonem: TfrmDonem
  Left = 343
  Top = 220
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'frmDonem'
  ClientHeight = 194
  ClientWidth = 243
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 3
    Top = 25
    Width = 238
    Height = 166
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 8
      Top = 14
      Width = 220
      Height = 142
      DataSource = dsrcDONEM
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'DONEM_ADI'
          Title.Alignment = taCenter
          Title.Caption = 'D�NEM ADI'
          Visible = True
        end>
    end
  end
  object DBNavigator1: TDBNavigator
    Left = 8
    Top = 0
    Width = 230
    Height = 25
    DataSource = dsrcDONEM
    TabOrder = 1
  end
  object dsrcDONEM: TDataSource
    DataSet = tblDONEM
    Left = 21
    Top = 150
  end
  object tblDONEM: TTable
    DatabaseName = 'SIMORE'
    TableName = 'DONEM.db'
    Left = 21
    Top = 114
    object tblDONEMDONEM_ADI: TStringField
      FieldName = 'DONEM_ADI'
      Size = 30
    end
  end
end
