# Created by: Andreev Maxim <andreevmaxim@gmail.com>
# $FreeBSD: devel/qconf/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	qconf
PORTVERSION=	1.4
CATEGORIES=	devel
MASTER_SITES=	http://delta.affinix.com/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to create configure script for qmake-based project

USE_BZIP2=	yes
USE_QT4=	corelib xml moc_build qmake_build
HAS_CONFIGURE=	yes
QT_NONSTANDARD=	yes

CONFIGURE_ARGS=	--prefix=${PREFIX} \
		--datadir=${DATADIR:S,/qconf,,} \
		--qtdir=${QT_PREFIX} \
		--verbose

NO_STAGE=	yes
.include <bsd.port.mk>
