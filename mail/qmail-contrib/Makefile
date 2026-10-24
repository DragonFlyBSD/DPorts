PORTNAME=	qmail-contrib
DISTVERSION=	0.1
PORTREVISION=	5
CATEGORIES=	mail

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Meta-port of contributed programs for qmail
WWW=		https://cr.yp.to/mail.html

RUN_DEPENDS=	dot-forward:mail/dot-forward \
		fastforward:mail/fastforward

USES=		metaport

dfly-patch:
	${PATCH} -d ${WRKDF} -s <${DFLY_PATCHDIR}/extra-patch-error.h
	${PATCH} -d ${WRKDF} -s <${DFLY_PATCHDIR}/extra-patch-find-systype.sh
	${PATCH} -d ${WRKFF} -s <${DFLY_PATCHDIR}/extra-patch-error.h
	${PATCH} -d ${WRKFF} -s <${DFLY_PATCHDIR}/extra-patch-find-systype.sh

.include <bsd.port.mk>
