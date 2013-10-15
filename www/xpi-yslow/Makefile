# Created by: Sutra Zhou <zhoushuqun@gmail.com>
# $FreeBSD: www/xpi-yslow/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	yslow
PORTVERSION=	3.1.0
DISTVERSIONSUFFIX=	-fx
CATEGORIES=	www

MAINTAINER=	zhoushuqun@gmail.com
COMMENT=	Analyzes web pages and why they are slow

RUN_DEPENDS=	xpi-firebug>=1.3.0:${PORTSDIR}/www/xpi-firebug

XPI_NUM=	5369
XPI_ID=		yslow@yahoo-inc.com

NO_STAGE=	yes
.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
