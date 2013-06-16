# Created by: Shawn Webb <bsdports@wayfair.com>
# $FreeBSD: www/drupal7-jailadmin/Makefile 320347 2013-06-09 16:49:26Z miwi $

PORTNAME=	jailadmin
DISTVERSION=	7.x-0.6.1
CATEGORIES=	www
MASTER_SITES=	http://0xfeedface.org/~shawn/projects/jailadmin/ \
    		http://mirrors.rit.edu/zi/

MAINTAINER=	lattera@gmail.com
COMMENT=	Drupal 7 module for administering FreeBSD vnet jails

LICENSE=	BSD

USE_DRUPAL=	yes

.include <bsd.port.options.mk>

DRUPAL_MODULE=	yes
DRUPAL_VERSION=	7
MODULE_FILES=	README \
		jailadmin.admin.inc \
		jailadmin.drush.inc \
		jailadmin.helpers.inc \
		jailadmin.info \
		jailadmin.install \
		jailadmin.module \
		jailconfig.inc \
		jailnetwork.inc \
		jailstatus.inc \
		classes/Jail.php \
		classes/Mount.php \
		classes/Network.php \
		classes/NetworkDevice.php \
		classes/Service.php \
		.gitignore

MODULE_DIRS=	classes

DOC_FILES=	README

.include <bsd.port.mk>
