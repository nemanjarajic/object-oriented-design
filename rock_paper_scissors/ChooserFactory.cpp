#include "ChooserFactory.hpp"

Chooser* ChooserFactory::makeChooser(string which) {
    if (which == RandomChooser::NAME) return new RandomChooser();
    if (which == MLChooser::NAME) return new MLChooser();
}
