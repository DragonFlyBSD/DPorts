# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: www/drupal6-path_redirect/Makefile 313237 2013-03-02 14:39:16Z miwi $

PORTNAME=	path_redirect
DISTVERSION=	6.x-1.0-rc2
CATEGORIES=	www

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Drupal module to allow redirects

USE_DRUPAL=	yes
DRUPAL6_MODULE=	yes

MODULE_FILES=	generate/path_redirect_generate.drush.inc \
		generate/path_redirect_generate.info \
		generate/path_redirect_generate.module \
		path_redirect.admin.inc path_redirect.info \
		path_redirect.install path_redirect.js path_redirect.module \
		path_redirect.test

MODULE_DIRS=	generate

DOC_FILES=	LICENSE.txt README.txt

.include <bsd.port.mk>
