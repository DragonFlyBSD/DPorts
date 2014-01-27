# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: databases/ruby-qdbm/Makefile 340722 2014-01-22 17:00:46Z mat $

PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}

COMMENT=	Ruby API for QDBM

SLAVEPORT=	ruby

USE_RUBY=	yes
MASTERDIR=	${.CURDIR}/../../databases/qdbm
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/ruby
PLIST=		${.CURDIR}/pkg-plist
DESCR=		${.CURDIR}/pkg-descr
PATCHDIR=	${.CURDIR}/files

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
