#include <QApplication>
#include <QWebEngineView>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create a QWebEngineView to display web content
    QWebEngineView view;
    view.setUrl(QUrl("https://y8tireu.github.io/Fruit-Ninja/"));
    view.resize(1024, 768);
    view.show();

    return app.exec();
}

