# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-Sys-Syscall/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=		Sys::Syscall.3 Sys::README.3

post-patch:
	@${RM} ${WRKSRC}/lib/Sys/Syscall.pm.orig

.include <bsd.port.mk>
