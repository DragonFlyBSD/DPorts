# Created by: Shawn Webb <bsdports@wayfair.com>
# $FreeBSD: ports/www/drupal7-jailadmin/Makefile,v 1.4 2012/11/17 06:02:32 svnexp Exp $

PORTNAME=	jailadmin
DISTVERSION=	7.x-0.4.1
CATEGORIES=	www
MASTER_SITES=	http://ftp.freebsd.org/pub/FreeBSD/distfiles/drupal/

MAINTAINER=	lattera@gmail.com
COMMENT=	Drupal 7 module for administering FreeBSD vnet jails

LICENSE=	BSD

USE_DRUPAL=	yes

.include <bsd.port.options.mk>

DRUPAL_MODULE=	yes
DRUPAL_VERSION=	7
MODULE_FILES=	README \
		jailadmin.admin.inc \
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
		classes/Service.php

MODULE_DIRS=	classes

DOC_FILES=	README

.include <bsd.port.mk>
