# New ports collection makefile for:	scons
# Date created:				16 December 2001
# Whom:					Peter Haight <peterh@sapros.com>
#
# $FreeBSD: devel/scons/Makefile 317412 2013-05-05 13:49:11Z eadler $
#

PORTNAME=	scons
PORTVERSION=	2.1.0
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	gavin@16degrees.com.au
COMMENT=	A build tool alternative to make

MAKE_JOBS_SAFE=	yes

.if !defined (NO_INSTALL_MANPAGES)
MAN1=		scons.1 sconsign.1 scons-time.1
.endif

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_EGGINFODIR=	${PREFIX}/lib/scons-${PORTVERSION}

PLIST_SUB+=	SCONS_VER=${PORTVERSION}

USE_PYTHON=	-2.7

.include <bsd.port.pre.mk>

.if defined (NO_INSTALL_MANPAGES)
PYDISTUTILS_INSTALLARGS+=	--no-install-man
.endif

.include <bsd.port.post.mk>
