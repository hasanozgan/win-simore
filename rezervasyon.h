//---------------------------------------------------------------------------

#ifndef rezervasyonH
#define rezervasyonH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <ImgList.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmResepsiyon : public TForm
{
__published:	// IDE-managed Components
    TToolBar *ToolBar1;
    TToolButton *ToolButton1;
    TToolButton *ToolButton2;
    TToolButton *ToolButton3;
    TToolButton *ToolButton4;
    TToolButton *ToolButton5;
    TToolButton *ToolButton6;
    TLabel *Label2;
    TComboBox *comboDONEM;
    TToolButton *ToolButton7;
    TMainMenu *MainMenu1;
    TMenuItem *Dosya1;
    TMenuItem *Yeni1;
    TMenuItem *Kaydet1;
    TMenuItem *Sil1;
    TMenuItem *N1;
    TMenuItem *A1;
    TMenuItem *N2;
    TMenuItem *k1;
    TMenuItem *Rapor1;
    TMenuItem *KartDkm1;
    TMenuItem *Yardm1;
    TMenuItem *erik1;
    TImageList *ImageList1;
    TStatusBar *StatusBar1;
    TDataSource *dsrcREZERVE;
    TTable *tblREZERVE;
    TDataSource *dsrcAKRABA;
    TTable *tblAKRABA;
    TStringField *tblREZERVEDONEM;
    TFloatField *tblREZERVESIRA_NO;
    TStringField *tblREZERVEEMEKLILIK;
    TStringField *tblREZERVEKUVVETI;
    TStringField *tblREZERVERUTBESI;
    TStringField *tblREZERVEPBIK_NO;
    TStringField *tblREZERVESICIL_NO;
    TStringField *tblREZERVEADI;
    TStringField *tblREZERVESOYADI;
    TStringField *tblREZERVEPLAKA;
    TDateField *tblREZERVEDOGUM_TARIHI;
    TMemoField *tblREZERVEADRES;
    TStringField *tblREZERVETAHSIS_CESIDI;
    TStringField *tblREZERVEMOTEL;
    TStringField *tblREZERVEBLOK;
    TFloatField *tblREZERVEODA_NO;
    TDateField *tblREZERVEGIRIS_TARIHI;
    TDateField *tblREZERVECIKIS_TARIHI;
    TFloatField *tblREZERVEMOTEL_UCRETI;
    TFloatField *tblREZERVEILAVE_YATAK;
    TFloatField *tblAKRABAIDREZERVE;
    TStringField *tblAKRABAADI;
    TStringField *tblAKRABASOYADI;
    TStringField *tblAKRABAAKRABALIK;
    TTimer *Timer1;
    TToolButton *ToolButton8;
    TQuery *queryKAYIT_NO;
    TFloatField *queryKAYIT_NOIDREZERVE;
    TFloatField *tblREZERVEIDREZERVE;
    TBooleanField *tblAKRABAKAMP_CIKISI;
    TQuery *queryKAMPICI_ODA;
    TQuery *queryKAMPDISI_ODA;
    TQuery *queryKAMPICI_PERSONEL;
    TQuery *queryKAMPDISI_PERSONEL;
    TIntegerField *queryKAMPICI_ODATOPLAM;
    TIntegerField *queryKAMPDISI_ODATOPLAM;
    TStringField *tblAKRABADONEM;
    TIntegerField *queryKAMPICI_PERSONELTOPLAM;
    TIntegerField *queryKAMPDISI_PERSONELTOPLAM;
    TDateField *tblAKRABADOGUM_TARIHI;
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TLabel *Label8;
    TLabel *Label15;
    TLabel *Label16;
    TLabel *Label17;
    TLabel *Label18;
    TDBEdit *dbeditSIRANO;
    TDBEdit *dbeditRUTBE;
    TDBEdit *dbeditPBIKNO;
    TDBEdit *dbeditSICILNO;
    TDBEdit *dbeditADI;
    TDBEdit *dbeditSOYADI;
    TDBEdit *dbeditPLAKA;
    TDateTimePicker *datetimeDOGUMTARIHI;
    TDBComboBox *dbcomboEMKLILIK;
    TDBComboBox *dbcomboKUVVET;
    TGroupBox *GroupBox2;
    TLabel *Label9;
    TLabel *Label10;
    TLabel *Label11;
    TLabel *Label12;
    TLabel *Label13;
    TLabel *Label14;
    TDBComboBox *dbcomboTAHSIS;
    TDBComboBox *dbcomboMOTEL;
    TDBComboBox *dbcomboBLOK;
    TDBEdit *dbeditODANO;
    TDBEdit *dbeditMOTELUCRETI;
    TDBEdit *dbeditILAVEYATAK;
    TPanel *Panel1;
    TImage *Image1;
    TDateTimePicker *datetimeGIRIS;
    TDateTimePicker *datetimeCIKIS;
    TDBMemo *dbmemoADRES;
    TDBGrid *DBGrid1;
    void __fastcall Yeni1Click(TObject *Sender);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall datetimeDOGUMTARIHIChange(TObject *Sender);
    void __fastcall datetimeGIRISChange(TObject *Sender);
    void __fastcall datetimeCIKISChange(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall ToolButton8Click(TObject *Sender);
    void __fastcall A1Click(TObject *Sender);
    void __fastcall tblAKRABAAfterInsert(TDataSet *DataSet);
    void __fastcall dbcomboEMKLILIKChange(TObject *Sender);
    void __fastcall dbcomboKUVVETChange(TObject *Sender);
    void __fastcall comboDONEMChange(TObject *Sender);
    void __fastcall dbeditSIRANOKeyPress(TObject *Sender, char &Key);
    void __fastcall dbcomboEMKLILIKKeyPress(TObject *Sender, char &Key);
    void __fastcall dbcomboKUVVETKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditRUTBEKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditPBIKNOKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditSICILNOKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditADIKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditSOYADIKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditPLAKAKeyPress(TObject *Sender, char &Key);
    void __fastcall datetimeDOGUMTARIHIKeyPress(TObject *Sender,
          char &Key);
    void __fastcall dbcomboTAHSISKeyPress(TObject *Sender, char &Key);
    void __fastcall dbcomboMOTELKeyPress(TObject *Sender, char &Key);
    void __fastcall dbcomboBLOKKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditODANOKeyPress(TObject *Sender, char &Key);
    void __fastcall datetimeGIRISKeyPress(TObject *Sender, char &Key);
    void __fastcall datetimeCIKISKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditMOTELUCRETIKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditILAVEYATAKKeyPress(TObject *Sender, char &Key);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall erik1Click(TObject *Sender);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmResepsiyon(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmResepsiyon *frmResepsiyon;
//---------------------------------------------------------------------------
#endif
