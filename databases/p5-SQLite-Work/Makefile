# Created by: Chris Larsen <darth@vader.dk>
# $FreeBSD: databases/p5-SQLite-Work/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	SQLite-Work
PORTVERSION=	0.13
CATEGORIES=	databases www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RUBYKAT
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Report on and update an SQLite database

BUILD_DEPENDS=	p5-DBD-SQLite>=0:${PORTSDIR}/databases/p5-DBD-SQLite \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Getopt-ArgvFile>=1.10:${PORTSDIR}/devel/p5-Getopt-ArgvFile \
		p5-Text-NeatTemplate>=0:${PORTSDIR}/textproc/p5-Text-NeatTemplate
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN1=		sqlreport.1 \
		sqlw_import.1 \
		sqlw_mail.1
MAN3=		SQLite::Work.3 \
		SQLite::Work::CGI.3 \
		SQLite::Work::Mail.3

NO_STAGE=	yes
.include <bsd.port.mk>
