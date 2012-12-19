# New ports collection makefile for:	Pod-DocBook
# Date created:	   29 July 2004
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/textproc/p5-Pod-DocBook/Makefile,v 1.10 2012/11/17 06:02:07 svnexp Exp $
#

PORTNAME=	Pod-DocBook
PORTVERSION=	1.2
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:NANDU
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert Pod data to DocBook SGML

BUILD_DEPENDS=	p5-podlators>=0:${PORTSDIR}/textproc/p5-podlators \
		p5-Text-Tabs+Wrap>=0:${PORTSDIR}/textproc/p5-Text-Tabs+Wrap
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		pod2docbook.1
MAN3=		Pod::DocBook.3

.include <bsd.port.mk>
