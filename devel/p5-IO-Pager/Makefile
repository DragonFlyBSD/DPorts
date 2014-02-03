# Created by: Rong-En Fan <rafan@infor.org>
# $FreeBSD: devel/p5-IO-Pager/Makefile 341707 2014-01-29 09:19:35Z az $

PORTNAME=	IO-Pager
PORTVERSION=	0.31
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	Select a pager, optionally pipe it output if destination is a TTY

USES=		perl5
USE_PERL5=	configure

regression-test:
	@cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
