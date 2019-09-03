#ifndef ZSWCEXPORTSVGDIALOG_H
#define ZSWCEXPORTSVGDIALOG_H

#include <QDialog>

namespace Ui {
class ZSwcExportSvgDialog;
}

class ZClickableColorLabel;

class ZSwcExportSvgDialog : public QDialog
{
  Q_OBJECT

public:
  explicit ZSwcExportSvgDialog(QWidget *parent = 0);
  ~ZSwcExportSvgDialog();

  bool usingSingleColor() const;
  QColor getColor() const;

private:
  Ui::ZSwcExportSvgDialog *ui;
  ZClickableColorLabel *m_colorLabel;
};

#endif // ZSWCEXPORTSVGDIALOG_H
