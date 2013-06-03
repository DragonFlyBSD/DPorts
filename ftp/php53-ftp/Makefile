# $FreeBSD: ftp/php53-ftp/Makefile 317821 2013-05-10 15:48:16Z flo $

CATEGORIES=	ftp

MASTERDIR=	${.CURDIR}/../../lang/php53

PKGNAMESUFFIX=	-ftp

post-patch:
	@${REINPLACE_CMD} s/HAVE_OPENSSL_EXT/__FreeBSD__/ \
		${WRKSRC}/ftp.* ${WRKSRC}/php_ftp.*

.include "${MASTERDIR}/Makefile"
