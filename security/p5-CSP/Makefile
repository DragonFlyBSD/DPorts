# Created by: David Thiel <lx@redundancy.redundancy.org>
# $FreeBSD: security/p5-CSP/Makefile 341825 2014-01-30 09:42:48Z az $

PORTNAME=	CSP
PORTVERSION=	0.34
CATEGORIES=	security perl5
MASTER_SITES=	ftp://ftp.it.su.se/pub/users/leifj/ \
		http://redundancy.redundancy.org/mirror/
PKGNAMEPREFIX=	p5-

MAINTAINER=	lx@FreeBSD.org
COMMENT=	Perl tool for managing Certificate Authorities

BUILD_DEPENDS=	p5-Date-Calc>=0:${PORTSDIR}/devel/p5-Date-Calc \
		p5-Term-Prompt>=0:${PORTSDIR}/devel/p5-Term-Prompt \
		p5-IPC-Run>=0:${PORTSDIR}/devel/p5-IPC-Run
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
