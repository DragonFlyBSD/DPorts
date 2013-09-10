# Created by: Warner Losh <imp@FreeBSD.org>
# $FreeBSD: devel/p5-Acme-Damn/Makefile 326592 2013-09-07 10:16:46Z az $

PORTNAME=	Acme-Damn
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	imp@FreeBSD.org
COMMENT=	Unblessing perl objects

RUN_DEPENDS=	p5-Test-Exception>=0.29:${PORTSDIR}/devel/p5-Test-Exception
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3 += Acme::Damn.3

.include <bsd.port.mk>
