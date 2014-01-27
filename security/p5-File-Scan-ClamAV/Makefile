# Created by: Jan-Peter Koopmann <Jan-Peter.Koopmann@seceidos.de>
# $FreeBSD: security/p5-File-Scan-ClamAV/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	File-Scan-ClamAV
PORTVERSION=	1.9.1
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for the clamav virus scanner

BUILD_DEPENDS=	clamscan:${PORTSDIR}/security/clamav
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
