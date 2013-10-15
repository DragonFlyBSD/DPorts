# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: www/drupal6-pathauto/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	pathauto
DISTVERSION=	6.x-2.0
CATEGORIES=	www

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Automatically generates URLs for Drupal content

RUN_DEPENDS=	drupal6-token>=0:${PORTSDIR}/www/drupal6-token

USE_DRUPAL=	yes
DRUPAL6_MODULE=	yes
MODULE_FILES=	pathauto.admin.inc pathauto.inc pathauto.install pathauto.module \
		pathauto.test pathauto.api.php pathauto.info pathauto.js \
		pathauto.pathauto.inc pathauto.tokens.inc
DOC_FILES=	INSTALL.txt API.txt README.txt LICENSE.txt

NO_STAGE=	yes
.include <bsd.port.mk>
