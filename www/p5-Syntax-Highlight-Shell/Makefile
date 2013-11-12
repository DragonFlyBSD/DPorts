# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: www/p5-Syntax-Highlight-Shell/Makefile 333137 2013-11-07 16:38:13Z vanilla $

PORTNAME=	Syntax-Highlight-Shell
PORTVERSION=	0.04
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Syntax::Highlight::Shell - Highlight shell scripts

BUILD_DEPENDS=	p5-Shell-Parser>=0:${PORTSDIR}/devel/p5-Shell-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
