# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: devel/p5-Lexical-Persistence/Makefile 325100 2013-08-21 09:17:02Z jadawin $
#

PORTNAME=	Lexical-Persistence
PORTVERSION=	1.023
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Persistent lexical variable values for arbitrary calls

BUILD_DEPENDS=	p5-Devel-LexAlias>=0.04:${PORTSDIR}/devel/p5-Devel-LexAlias \
		p5-PadWalker>=1.1:${PORTSDIR}/devel/p5-PadWalker
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Lexical::Persistence.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
