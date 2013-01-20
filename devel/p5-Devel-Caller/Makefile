# Created by: Ying-Chieh Chen
# $FreeBSD: ports/devel/p5-Devel-Caller/Makefile,v 1.10 2013/01/16 15:46:58 svnexp Exp $

PORTNAME=	Devel-Caller
PORTVERSION=	2.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A perl module which is meatier versions of caller

BUILD_DEPENDS=	p5-PadWalker>=0.08:${PORTSDIR}/devel/p5-PadWalker
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Devel::Caller.3

.include <bsd.port.mk>
