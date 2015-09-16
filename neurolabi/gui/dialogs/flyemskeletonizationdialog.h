#ifndef FLYEMSKELETONIZATIONDIALOG_H
#define FLYEMSKELETONIZATIONDIALOG_H

#include <QDialog>

namespace Ui {
class FlyEmSkeletonizationDialog;
}

class FlyEmSkeletonizationDialog : public QDialog
{
  Q_OBJECT
  
public:
  explicit FlyEmSkeletonizationDialog(QWidget *parent = 0);
  ~FlyEmSkeletonizationDialog();
  
  int lengthThreshold() const;
  int distanceThreshold() const;
  int sizeThreshold() const;
  bool isConnectingAll() const;
  bool isKeepingShortObject() const;
  bool isExcludingSmallObj() const;
  bool isLevelChecked() const;
  int level() const;
  int getLevelOp() const;

  bool isDownsampleChecked() const;
  int getXInterval() const;
  int getYInterval() const;
  int getZInterval() const;

public slots:
  void enableDistanceThreshold();
  void enableSizeThreshold();
  void enableDownsample();

private:
  Ui::FlyEmSkeletonizationDialog *ui;
};

#endif // FLYEMSKELETONIZATIONDIALOG_H
