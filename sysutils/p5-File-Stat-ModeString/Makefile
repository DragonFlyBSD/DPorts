# New ports collection makefile for:	File-Stat-ModeString
# Date created:				Wed 10 Nov 2010 23:44:23 GMT
# Whom:					Jase Thew <freebsd@beardz.net>
#
# $FreeBSD: ports/sysutils/p5-File-Stat-ModeString/Makefile,v 1.4 2012/11/17 06:01:40 svnexp Exp $
#

PORTNAME=	File-Stat-ModeString
PORTVERSION=	1.00
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:FEDOROV
PKGNAMEPREFIX=	p5-

MAINTAINER=	jase@FreeBSD.org
COMMENT=	Converts file stat(2) mode to/from string representation

LICENSE=	GPLv2

BUILD_DEPENDS=	p5-File-Stat-Bits>0:${PORTSDIR}/sysutils/p5-File-Stat-Bits
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		File::Stat::ModeString.3

.include <bsd.port.mk>
