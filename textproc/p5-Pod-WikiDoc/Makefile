# Created by: Mathieu Arnold <mat@FreeBSD.org>
# $FreeBSD: textproc/p5-Pod-WikiDoc/Makefile 333880 2013-11-15 15:59:23Z mat $

PORTNAME=	Pod-WikiDoc
PORTVERSION=	0.20
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mat@FreeBSD.org
COMMENT=	Generate Pod from inline wiki style text

LICENSE=	AL2

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-pushd>=0:${PORTSDIR}/devel/p5-File-pushd \
		p5-Getopt-Lucid>=0.14:${PORTSDIR}/textproc/p5-Getopt-Lucid \
		p5-IPC-Run3>=0.033:${PORTSDIR}/devel/p5-IPC-Run3 \
		p5-Parse-RecDescent>=1.967.006:${PORTSDIR}/devel/p5-Parse-RecDescent \
		p5-Probe-Perl>=0.01:${PORTSDIR}/sysutils/p5-Probe-Perl

USES=	perl5
USE_PERL5=	configure

.include <bsd.port.mk>
