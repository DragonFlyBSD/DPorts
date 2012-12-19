# New ports collection makefile for:	bogofilter-tc
# Date created:				2008-08-29
# Whom:				   	Zach Thompson <hideo@lastamericanempire.com>
#
# $FreeBSD: ports/mail/bogofilter-tc/Makefile,v 1.22 2012/12/03 20:19:05 svnexp Exp $
#

PORTNAME=	bogofilter
PORTREVISION=	0
CATEGORIES=	mail
PKGNAMESUFFIX=	-tc

MAINTAINER=	mandree@FreeBSD.org
# Blanket approval for changes by Zach Thompson (address above)

LIB_DEPENDS=	tokyocabinet.9:${PORTSDIR}/databases/tokyocabinet

CONFLICTS_INSTALL=	bogofilter-[0-9]* [a-z][a-z]-bogofilter-[1-9]* bogofilter-sqlite-[0-9]* bogofilter-qdbm-[0-9]*

CONFIGURE_ARGS=	--with-database=tokyocabinet
BF_CPPFLAGS=	-I${LOCALBASE}/include
BF_LIBS=
DESCR=		${PKGDIR}/pkg-descr

MASTERDIR=	${.CURDIR}/../bogofilter

.include "${MASTERDIR}/Makefile"
