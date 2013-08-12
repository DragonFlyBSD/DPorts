# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: www/p5-Syntax-Highlight-Shell/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=	Syntax::Highlight::Shell.3

.include <bsd.port.mk>
