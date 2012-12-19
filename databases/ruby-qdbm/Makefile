# New ports collection makefile for:	ruby-qdbm
# Date created:		2005-09-01
# Whom:			Michael Johnson <ahze@FreeBSD.org>
#
# $FreeBSD: ports/databases/ruby-qdbm/Makefile,v 1.3 2012/11/17 05:55:24 svnexp Exp $
#

PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}

COMMENT=	Ruby API for QDBM

SLAVEPORT=	ruby

USE_RUBY=	yes
MASTERDIR=	${.CURDIR}/../../databases/qdbm
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/ruby
PLIST=		${.CURDIR}/pkg-plist
DESCR=		${.CURDIR}/pkg-descr
PATCHDIR=	${.CURDIR}/files

.include "${MASTERDIR}/Makefile"
