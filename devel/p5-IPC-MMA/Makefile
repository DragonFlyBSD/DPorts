# Created by: Peter Vereshagin <peter@vereshagin.org>
# $FreeBSD: devel/p5-IPC-MMA/Makefile 326639 2013-09-07 14:36:58Z az $

PORTNAME=	IPC-MMA
PORTVERSION=	0.81
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	peter@vereshagin.org
COMMENT=	Improved Perl interface to Ralf Engelschall's mm library

BUILD_DEPENDS=	p5-Devel-CheckOS>=0:${PORTSDIR}/devel/p5-Devel-CheckOS
RUN_DEPENDS=	p5-Devel-CheckOS>=0:${PORTSDIR}/devel/p5-Devel-CheckOS
LIB_DEPENDS=	mm.14:${PORTSDIR}/devel/mm
TEST_DEPENDS=	p5-Test-Warn>=0:${PORTSDIR}/devel/p5-Test-Warn

USES=		perl5
USE_PERL5=	configure

MAN3=		IPC::MMA.3

.include <bsd.port.mk>
