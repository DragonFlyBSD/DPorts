# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Devel-STrace/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Devel-STrace
PORTVERSION=	0.31
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	strace(1)-like runtime call trace for Perl applications

RUN_DEPENDS=	p5-Devel-RingBuffer>=0:${PORTSDIR}/devel/p5-Devel-RingBuffer \
		p5-Time-HiRes>=0:${PORTSDIR}/devel/p5-Time-HiRes
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Devel::STrace.3 Devel::STrace::Monitor.3

post-patch:
	@${REINPLACE_CMD} -e 's!\.pl!!g' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
