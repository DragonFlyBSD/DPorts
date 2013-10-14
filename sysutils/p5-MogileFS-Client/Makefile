# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: sysutils/p5-MogileFS-Client/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	MogileFS-Client
PORTVERSION=	1.17
CATEGORIES=	sysutils net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DORMANDO
PKGNAMEPREFIX=	p5-

MAINTAINER=	trociny@FreeBSD.org
COMMENT=	Client library for the MogileFS distributed file system

BUILD_DEPENDS=	p5-IO-stringy>=2.102:${PORTSDIR}/devel/p5-IO-stringy \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS=	p5-IO-stringy>=2.102:${PORTSDIR}/devel/p5-IO-stringy \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww

USES=		perl5
USE_PERL5=	configure

MAN3=		MogileFS::Client.3

NO_STAGE=	yes
.include <bsd.port.mk>
