# Created by: Alexey V. Degtyarev <alexey@renatasystems.org>
# $FreeBSD: devel/p5-Proc-WaitStat/Makefile 341710 2014-01-29 10:33:57Z az $

PORTNAME=	Proc-WaitStat
PORTVERSION=	1.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	alexey@renatasystems.org
COMMENT=	Interpret and act on wait() status values

BUILD_DEPENDS=	p5-IPC-Signal>=0:${PORTSDIR}/devel/p5-IPC-Signal
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
