#include "zswcexportsvgdialog.h"
#include "ui_zswcexportsvgdialog.h"

#include "zclickablelabel.h"
#include "znumericparameter.h"

ZSwcExportSvgDialog::ZSwcExportSvgDialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::ZSwcExportSvgDialog)
{
  ui->setupUi(this);

  ZVec4Parameter *colorVec = new ZVec4Parameter(
        "", glm::vec4(1.0, 0, 0, 0), glm::vec4(0.f), glm::vec4(1.f), this);

  m_colorLabel = new ZClickableColorLabel(colorVec);
  m_colorLabel->setHeight(16);
  ui->singleColorLayout->addWidget(m_colorLabel);
  m_colorLabel->setVisible(usingSingleColor());

  connect(ui->singleColorRadioButton, SIGNAL(toggled(bool)),
          m_colorLabel, SLOT(setVisible(bool)));
//      labelWidget->setWidth(33);

}

ZSwcExportSvgDialog::~ZSwcExportSvgDialog()
{
  delete ui;
}

bool ZSwcExportSvgDialog::usingSingleColor() const
{
  return ui->singleColorRadioButton->isChecked();
}

QColor ZSwcExportSvgDialog::getColor() const
{
  return m_colorLabel->toQColor();
}
