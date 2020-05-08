#include <QApplication>
#include <QGraphicsScene>
#include <MyRect.h>
#include <QGraphicsView>
/*      Prereqs:
        -basic knowledge of c++ (pointers and memory management)
        -very vasic knowledge of Qt (widgets, parent-child relation)

        Tutorial topics:
        -QGraphicsScene (game objects container)
        -QGraphicsItem (any game object is derived from this class) -> (QGraphicsRectItem - abstract)
        -QGraphicsView (visualizes scene)                       */
// ---------------------------------------------------------------------------------------------------------------------------------------------
/*      Tt:
        -events (keyPressEvent() and QKeyEvent)
        -event propogation system
        -QDebug                                                 */
// ---------------------------------------------------------------------------------------------------------------------------------------------


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    //craete an item to put into the scene
    MyRect * rect = new MyRect;
    rect->setRect(0,0,100,100);

    // add the item to the scene
    scene->addItem(rect);

    // make rect focusable
    rect->setFlag((QGraphicsItem::ItemIsFocusable));
    rect->setFocus();

    // create a view to to visualize
    QGraphicsView * view = new QGraphicsView(scene);

    view->show();
    return a.exec();
}
