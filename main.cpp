#include <QCoreApplication>
#include <QTextStream>

QTextStream cin(stdin);
QTextStream cout(stdout);
QString text;
QRegExp nameRegExp= QRegExp("^[a-zA-Z]+$$");
QStringList name;

int main(int argc, char *argv[])
{
   QCoreApplication a(argc, argv);
   while(true)
   {
        cout<<"only letters and whitespace"<<endl;
        text=cin.readLine();
        name= text.split(" ");
        for (QString subName:name) {
            cout<<subName<<"\t"<<nameRegExp.exactMatch(subName)<<endl;
        }
   }



    return a.exec();
}
