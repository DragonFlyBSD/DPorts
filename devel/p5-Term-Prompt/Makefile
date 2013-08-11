# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: devel/p5-Term-Prompt/Makefile 324276 2013-08-05 15:05:29Z az $

PORTNAME=	Term-Prompt
PORTVERSION=	1.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Perl extension for prompting a user for information

BUILD_DEPENDS=	p5-Term-ReadKey>=0:${PORTSDIR}/devel/p5-Term-ReadKey
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Term::Prompt.3

.include <bsd.port.mk>
