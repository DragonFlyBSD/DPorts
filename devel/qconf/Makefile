# New ports collection makefile for:	qconf
# Date created:		2010-10-28
# Whom:			Andreev Maxim <andreevmaxim@gmail.com>
#
# $FreeBSD: ports/devel/qconf/Makefile,v 1.3 2012/11/17 05:56:54 svnexp Exp $
#

PORTNAME=	qconf
PORTVERSION=	1.4
CATEGORIES=	devel
MASTER_SITES=	http://delta.affinix.com/download/

MAINTAINER=	andreevmaxim@gmail.com
COMMENT=	Tool to create configure script for qmake-based project

USE_BZIP2=	yes
USE_QT4=	corelib xml moc_build qmake_build
HAS_CONFIGURE=	yes
QT_NONSTANDARD=	yes

CONFIGURE_ARGS=	--prefix=${PREFIX} \
		--datadir=${DATADIR:S,/qconf,,} \
		--qtdir=${QT_PREFIX} \
		--verbose

.include <bsd.port.mk>
