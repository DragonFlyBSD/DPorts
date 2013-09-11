# Created by: Sahil Tandon <sahil@FreeBSD.org>
# $FreeBSD: devel/p5-AnyEvent-DBus/Makefile 326818 2013-09-09 15:55:47Z az $

PORTNAME=	AnyEvent-DBus
PORTVERSION=	0.31
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sahil@FreeBSD.org
COMMENT=	Seamlessly integrate Net::DBus into AnyEvent

BUILD_DEPENDS=	p5-AnyEvent>=5:${PORTSDIR}/devel/p5-AnyEvent \
		p5-Net-DBus>=0.33:${PORTSDIR}/devel/p5-Net-DBus \
		p5-common-sense>=3.2:${PORTSDIR}/devel/p5-common-sense
RUN_DEPENDS=	p5-AnyEvent>=5:${PORTSDIR}/devel/p5-AnyEvent \
		p5-Net-DBus>=0.33:${PORTSDIR}/devel/p5-Net-DBus \
		p5-common-sense>=3.2:${PORTSDIR}/devel/p5-common-sense

MAN3=		AnyEvent::DBus.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
