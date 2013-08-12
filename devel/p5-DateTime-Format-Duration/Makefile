# Created by: Mathieu Arnold <mat@FreeBSD.org>
# $FreeBSD: devel/p5-DateTime-Format-Duration/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	DateTime-Format-Duration
PORTVERSION=	1.03a
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Format and parse DateTime::Durations

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${DISTNAME:C/a$//}

USES=		perl5
USE_PERL5=	configure

MAN3=		DateTime::Format::Duration.3

.include <bsd.port.mk>
