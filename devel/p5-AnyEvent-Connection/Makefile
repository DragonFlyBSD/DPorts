# Created by: Anes Mukhametov <anes@anes.su>
# $FreeBSD: devel/p5-AnyEvent-Connection/Makefile 341711 2014-01-29 10:57:06Z az $

PORTNAME=	AnyEvent-Connection
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anes@anes.su
COMMENT=	Base class for TCP connectful clients

BUILD_DEPENDS=	p5-AnyEvent>=5:${PORTSDIR}/devel/p5-AnyEvent \
		p5-Object-Event>=1.21:${PORTSDIR}/devel/p5-Object-Event \
		p5-common-sense>=2:${PORTSDIR}/devel/p5-common-sense \
		p5-Test-NoWarnings>=1.03:${PORTSDIR}/devel/p5-Test-NoWarnings \
		p5-Test-TCP>=0.14:${PORTSDIR}/devel/p5-Test-TCP \
		p5-lib-abs>=0.90:${PORTSDIR}/devel/p5-lib-abs
RUN_DEPENDS=	p5-AnyEvent>=5:${PORTSDIR}/devel/p5-AnyEvent \
		p5-Object-Event>=1.21:${PORTSDIR}/devel/p5-Object-Event \
		p5-common-sense>=2:${PORTSDIR}/devel/p5-common-sense

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
