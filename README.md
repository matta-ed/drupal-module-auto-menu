# SOPA Auto Menu

SOPA Auto Menu is a simple Drupal module to auto-create/update disabled menu
items for selected content types.

## Use case

Menu items are useful in that they are designed to provide a basic
hierarchical structure to the site, even when they're disabled.  This includes
breadcrumbs.

Drupal doesn't, by default, create menu items for nodes.  Even when a menu item
is (or is allowed) to be created, the menu item is *always* enabled.

This isn't always required for content types that are essentially being used as
'records' for views, such as News Articles, Events, etc., where having each
node as a menu item could not only make the front-end views of menus unwieldy,
but having to round-trip to the menu admin (even if the user has such
permissions) to disable the menu item is not only counter-intuitive but
inefficient to the content-management workflow.

This module should not be used where the user is expected to have direct control
over menu items as any customised settings are overwritten.

## Functions

SOPA Auto Menu automatically creates or updates menu items for the selected
content types even when the user has no administer menus permissions.

The module provides a simple administrative interface for selecting the content
types that the above functionality is applied to.

## Usage

0. Enable the module.
1. Within the content type, in the Menu Settings option, select the appropriate
   Available menu, and default parent item.
2. In the menu administration page, select the "SOPA Auto Menu" panel.
3. Select the content types to provide automatically disabled menu items, and
   select 'Save configuration'.

## Limitations

Menu item titles are reflections of the node's title at the time of creation,
and are updated to match the menu item when the node's title is updated.

When a user has access to the menu item part of the node form, the values here
are ignored and the menu item is created anyway.

Of course, this module depends on the Menu module being enabled.

## Alternatives

Should you need to offer users the ability to disable nodes manually in the node
form on a node-by-node basis, the Disable Node Menu Item[1] offers this.

## References

1. https://drupal.org/project/disable_node_menu_item
