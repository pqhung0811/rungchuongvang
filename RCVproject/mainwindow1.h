#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>

namespace Ui {
class MainWindow1;
}

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();

private slots:
    void startStopTimer();
    void updateTimer();

private:
    Ui::MainWindow1 *ui;
    QTimer *m_timer;
    int m_timeLeft;
    bool m_isTimerRunning;
};

#endif // MAINWINDOW1_H
