# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-File-Pid/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	File-Pid
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Pid File Manipulation

RUN_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		File::Pid.3

NO_STAGE=	yes
post-patch:
	${RM} ${WRKSRC}/lib/File/Pid.pm.orig

.include <bsd.port.mk>
