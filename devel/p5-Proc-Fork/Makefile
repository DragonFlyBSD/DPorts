# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: ports/devel/p5-Proc-Fork/Makefile,v 1.13 2013/01/27 08:41:34 svnexp Exp $

PORTNAME=	Proc-Fork
PORTVERSION=	0.802
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Proc::Fork - Simple, intuitive interface to the fork() system call

BUILD_DEPENDS=	p5-Exporter-Tidy>=0:${PORTSDIR}/devel/p5-Exporter-Tidy \
		p5-Object-Tiny-Lvalue>=0:${PORTSDIR}/devel/p5-Object-Tiny-Lvalue
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Proc::Fork.3

.include <bsd.port.mk>
