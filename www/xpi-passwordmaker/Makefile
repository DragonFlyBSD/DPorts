# Created by: Anatoly Borodin <anatoly.borodin@gmail.com>
# $FreeBSD: www/xpi-passwordmaker/Makefile 341212 2014-01-26 15:12:21Z miwi $

PORTNAME=	passwordmaker
PORTVERSION=	1.7.8
DISTVERSIONSUFFIX=	-fx+mz+sm
CATEGORIES=	www

MAINTAINER=	anatoly.borodin@gmail.com
COMMENT=	Manages all your online accounts using new or existing passwords

XPI_ID=		{5872365e-67d1-4afd-9480-fd293bebd20d}
XPI_NUM=	469
XPI_FILES=	LICENSE chrome/passwdmaker.jar chrome.manifest \
		components/component.js defaults/preferences/passwdmaker.js \
		install.js install.rdf
XPI_DIRS=	chrome components defaults/preferences defaults

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
