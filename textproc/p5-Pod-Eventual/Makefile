# New ports collection makefile for:	Pod-Eventual
# Date created:		27 December 2009
# Whom:			Andrey Kostenko <andrey@kostenko.name>
#
# $FreeBSD: ports/textproc/p5-Pod-Eventual/Makefile,v 1.4 2012/11/17 06:02:07 svnexp Exp $
#

PORTNAME=	Pod-Eventual
PORTVERSION=	0.093330
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Read a POD document as a series of trivial events

BUILD_DEPENDS=	p5-Mixin-Linewise>=0.001:${PORTSDIR}/devel/p5-Mixin-Linewise \
		p5-Test-Deep>=0:${PORTSDIR}/devel/p5-Test-Deep
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES
MAN3=	Pod::Eventual.3\
		Pod::Eventual::Simple.3

.include <bsd.port.mk>
