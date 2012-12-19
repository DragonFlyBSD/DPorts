# New ports collection makefile for:	p5-Text-Emoticon
# Date created:		2006-07-11
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/textproc/p5-Text-Emoticon/Makefile,v 1.7 2012/11/17 06:02:09 svnexp Exp $
#

PORTNAME=	Text-Emoticon
PORTVERSION=	0.04
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Factory class for Yahoo! and MSN emoticons

BUILD_DEPENDS=	p5-UNIVERSAL-require>=0:${PORTSDIR}/devel/p5-UNIVERSAL-require
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Text::Emoticon.3

.include <bsd.port.mk>
