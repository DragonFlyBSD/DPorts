# New ports collection makefile for:	p5-Log-Message-Simple
# Date created:				31 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Log-Message-Simple/Makefile,v 1.10 2012/11/17 05:56:21 svnexp Exp $
#

PORTNAME=	Log-Message-Simple
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides standardized logging facilities using the Log::Message module

BUILD_DEPENDS=	p5-Log-Message>=0:${PORTSDIR}/devel/p5-Log-Message
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Log::Message::Simple.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
