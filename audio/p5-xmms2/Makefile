# Created by: Alexander Botero-Lowry <alexbl@FreeBSD.org>
# $FreeBSD: ports/audio/p5-xmms2/Makefile,v 1.9 2012/11/17 05:54:41 svnexp Exp $

PORTREVISION=	1
CATEGORIES=	audio perl5
PKGNAMEPREFIX=	p5-

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Perl Bindings for XMMS2

LIB_DEPENDS+=	xmmsclient.6:${PORTSDIR}/audio/xmms2

MASTERDIR=	${.CURDIR}/../xmms2

USE_PERL5=	yes

PLIST=		${.CURDIR}/pkg-plist

XMMS2_SLAVE=	perl

.include "${MASTERDIR}/Makefile"
