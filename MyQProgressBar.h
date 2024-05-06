#include <QProgressBar>
#include <cmath>
#include <QTimer>

using namespace std;

class MyQProgressBar: public QProgressBar
{
    Q_OBJECT

    public:
        MyQProgressBar(QWidget *parent);
   
    public slots:
        void ini();
        void fase(int f);
        void amplitud(int a);
        void time();
        void animar();
    
    private:
        double amp, fa;
        int n, suma;
        QTimer timer;
        bool cronometre;

};