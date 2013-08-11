# Created by: Ying-Chieh Chen
# $FreeBSD: devel/p5-Devel-Caller/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Devel-Caller
PORTVERSION=	2.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module which is meatier versions of caller

BUILD_DEPENDS=	p5-PadWalker>=0.08:${PORTSDIR}/devel/p5-PadWalker
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Devel::Caller.3

.include <bsd.port.mk>
