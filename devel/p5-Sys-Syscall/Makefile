# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-Sys-Syscall/Makefile 332205 2013-10-31 07:36:25Z vanilla $

PORTNAME=	Sys-Syscall
PORTVERSION=	0.25
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Sys
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Access system calls that Perl doesn\'t provide access to

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${RM} ${WRKSRC}/lib/Sys/Syscall.pm.orig

.include <bsd.port.mk>
